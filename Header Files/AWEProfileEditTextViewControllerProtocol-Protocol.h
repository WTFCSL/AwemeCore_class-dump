//
//     Generated by private class-dump
//

@class NSDictionary;

@protocol AWEProfileEditTextViewControllerProtocol <NSObject>

@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSDictionary *pageFromDict;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly, nonatomic) BOOL initiallySelected;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)initWithEditType:(long long)arg0 user:(id)arg1;
- (id)pageFromDict;
- (void)setPageFromDict:(id)arg0;
- (BOOL)initiallySelected;
- (id /* block */)completionBlock;
- (void)setCompletionBlock:(id /* block */)arg0;

@end
