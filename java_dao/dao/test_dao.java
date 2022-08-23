package dao;

import java.util.List;

import dao.domain.Actor;

public class test_dao {
    public static void main(String[] args) throws Exception {
        test_dao t = new test_dao();
        t.testActorDao();
    }

    public void testActorDao() throws Exception {
        // Actor actor=new Actor();
        basic_dao actor = new basic_dao();
        List<Actor> actors = actor.queryMulti("select * from actor where id > ?", Actor.class, 1);
        System.out.println("查询结束");
        for (Actor i : actors) {
            System.out.println(i);
        }
        Object actor2 = actor.querySingle("select * from actor where id = ?", Actor.class, 2);
        System.out.println(actor2);
    }
}
