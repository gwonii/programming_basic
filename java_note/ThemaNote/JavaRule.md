# java 룰 



## 1. synchronized 

---

* java에서의 동기화 정책은 라이브러리에 의해서 작성되는 것이 아니라 (synchornized가 내재되어 있는 것들) 사용자가 집접 설정하는 것이다. 
* 



## 2. 불변객체

---

* class에서는 기본적으로 불변객체를 지향해야 한다. 

필드를 선언할 때는 private 제한자를 사용하고 메소드를 이용하여 그 값을 변화할 수 있게 만들어야 한다. 

class내에 메소드도 마찬가지로 다른 클래스에서 사용하지 않아도 되는 것들은 private을 설정할 수 있도록 한다. 



## 3. 순수함수 

---

* 함수의 결과는 매개 변수에 의해 결정되는 것이다. 
* 쓰레드를 위한 동기화가 필요없다. 함수 내에서 매개 변수로만 결과가 나오기 때문에






