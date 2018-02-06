.PHONY: test 
.PHONY: clean 

test:
	$(MAKE) -C lib
	go test

clean:
	$(MAKE) -C lib clean
