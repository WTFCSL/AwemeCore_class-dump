//
//     Generated by private class-dump
//

@class NSString;

@interface IESJSMethod : NSObject {
    NSString *_bridgeName;
    NSString *_methodName;
}

@property (copy, nonatomic) NSString *bridgeName;
@property (copy, nonatomic) NSString *methodName;
@property (readonly, copy, nonatomic) NSString *fullName;

+ (id)jsMethodWithBridgeName:(id)arg0 methodName:(id)arg1;

- (id)bridgeName;
- (void)setBridgeName:(id)arg0;
- (id)fullName;
- (void).cxx_destruct;
- (id)methodName;
- (void)setMethodName:(id)arg0;

@end
