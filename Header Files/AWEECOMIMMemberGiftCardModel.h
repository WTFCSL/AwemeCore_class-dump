//
//     Generated by private class-dump
//

@class AWEECOMIMCardMemberInfoModel;

@interface AWEECOMIMMemberGiftCardModel : AWEECOMIMBaseCardModel {
    AWEECOMIMCardMemberInfoModel *_memberModel;
}

@property (retain, nonatomic) AWEECOMIMCardMemberInfoModel *memberModel;

+ (Class)cardViewClass;
+ (id)primaryBtnNameSet;

- (void)updateModelWithData:(id)arg0 encrypted:(BOOL)arg1;
- (void)getCardDataWithCompletion:(id /* block */)arg0;
- (void)didSkipButtonClick:(id)arg0;
- (void)setMemberModel:(id)arg0;
- (id)memberModel;
- (void).cxx_destruct;

@end
