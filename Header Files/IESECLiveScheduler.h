//
//     Generated by private class-dump
//

@class NSString;

@interface IESECLiveScheduler : NSObject {
    NSString *_name;
    NSString *_category;
    id /* block */ _action;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *category;
@property (readonly, copy, nonatomic) id /* block */ action;

- (BOOL)invokeWithParams:(id)arg0;
- (id)initWithName:(id)arg0 category:(id)arg1 action:(id /* block */)arg2;
- (id)category;
- (void).cxx_destruct;
- (id /* block */)action;
- (id)name;

@end