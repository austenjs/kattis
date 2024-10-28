word_to_number = {}
number_to_word = {}
while True:
    try :
        tmp = input().split()
        if len(tmp) == 1:
            word_to_number.clear()
            number_to_word.clear()
            continue
        command, *arguments = tmp
        if command == 'def':
            word, number = arguments
            number = int(number)
            if word in word_to_number:
                number_to_word.pop(word_to_number[word])
            word_to_number[word] = number
            number_to_word[number] = word
        elif command == 'calc':
            operation = arguments[1]
            non_exist = False
            if arguments[0] not in word_to_number:
                non_exist = True
            if not non_exist:
                total = word_to_number[arguments[0]]
                for item in arguments[2:]:
                    if item == '=':
                        break
                    if item == '+' or item == '-':
                        operation = item
                    else:
                        if item not in word_to_number:
                            non_exist = True
                            break
                        if operation == '+':
                            total += word_to_number[item]
                        elif operation == '-':
                            total -= word_to_number[item]
            if non_exist or total not in number_to_word:
                arguments.append("unknown")
            else:
                arguments.append(number_to_word[total])
            print(" ".join(arguments))
    except EOFError:
        break
