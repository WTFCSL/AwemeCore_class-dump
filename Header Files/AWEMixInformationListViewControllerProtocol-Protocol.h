//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol AWEMixInformationListViewControllerProtocol <NSObject>

@property (copy, nonatomic) id /* block */ didClickMixHandleBlock;
@property (copy, nonatomic) id /* block */ didClickCreateMixHandleBlock;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraDict;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setExtraDict:(id)arg0;
- (id)extraDict;
- (id)initWithMixModel:(id)arg0 enterFrom:(id)arg1;
- (void)showMixInformationListWithCompletion:(id /* block */)arg0;
- (void)setDidClickMixHandleBlock:(id /* block */)arg0;
- (void)setDidClickCreateMixHandleBlock:(id /* block */)arg0;
- (id /* block */)didClickCreateMixHandleBlock;
- (id /* block */)didClickMixHandleBlock;
- (void)reload;

@end
