.PHONY: lab
lab:
	docker run -it --rm --mount type=bind,src=/Users/paulh16/Dropbox/Bradfield/architecture/fa19-lab-starter,dst=/cs61c-labs bradfield-architecture
