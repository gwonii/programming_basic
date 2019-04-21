# Buffer



## 1. 정의

---

* 버퍼는 읽고 쓰기가 가능한 메모리 배열입니다.

입출력을 하는데 있어서 데이터들을 한 번에 주고 받을 수 없으니 버퍼라는 메모리 배열을 이용하여 일정 데이터를 받고 전달하는 역할을 수행하고 있다. 



## 2. 버퍼의 종류

---

* 버퍼는 저장되는 데이터 타입에 따라 분류될 수 있고, 어떤 메모리를 사용하느냐에 따라 다이렉트와 넌다이렉트로 분류할 수 있다. 
* NIO 버퍼는 저장되는 데이터 타입에 따라서 별도의 클래스로 제공된다. 이 버퍼 클래스들은 버퍼 추상 클래스를 모두 상속하고 있다. 

### 데이터 타입에 따른 버퍼

| Class  |                               |
| ------ | ----------------------------- |
| Buffer | ByteBuffer > MappedByteBuffer |
| Buffer | CharBuffer                    |
|        | ShortBuffer                   |
|        | IntBuffer                     |
|        | LongBuffer                    |
| Buffer | FloatBuffer                   |
|        | DoubleBuffer                  |



### 메모리의 종류 (NonDirect / Direct)

| 구분                 | Non-Direct Buffer  | Direct Buffer      |
| -------------------- | ------------------ | ------------------ |
| 사용하는 메모리 공간 | JVM 힙 메모리      | 운영체제 메모리    |
| 버퍼 생성 시간       | 버퍼 생성이 빠르다 | 버퍼 생성이 느리다 |
| 버퍼의 크기          | 작다               | 크다               |
| 입출력 성능          | 낮다               | 높다               |



## 구분해야 할 필요성이 생긴 이후에 정리하자 