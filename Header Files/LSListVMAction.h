//
//     Generated by private class-dump
//

@class NSString;

@interface LSListVMAction : NSObject {
    NSString *_actionName;
    id _param;
}

@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, nonatomic) id param;

+ (id)actionWithName:(id)arg0 param:(id)arg1;

- (id)initWithActionName:(id)arg0 param:(id)arg1;
- (void).cxx_destruct;
- (id)param;
- (id)actionName;

@end
