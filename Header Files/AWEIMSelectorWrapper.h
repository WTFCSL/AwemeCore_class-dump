//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMSelectorWrapper : NSObject {
    NSString *_identify;
    id /* block */ _actionBlock;
}

@property (copy, nonatomic) NSString *identify;
@property (copy, nonatomic) id /* block */ actionBlock;

+ (id)build:(id)arg0 actionBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg0;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg0;
- (id)identify;
- (void)setIdentify:(id)arg0;

@end
