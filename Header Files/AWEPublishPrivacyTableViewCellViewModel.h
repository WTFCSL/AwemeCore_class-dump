//
//     Generated by private class-dump
//

@class NSString, AFDPrivacyPublishParamsModel;

@interface AWEPublishPrivacyTableViewCellViewModel : NSObject {
    BOOL _needUseCardUI;
    BOOL _needUpdate;
    AFDPrivacyPublishParamsModel *_paramsModel;
    unsigned long long _type;
    long long _userTotalCount;
    NSString *_customTitle;
    id /* block */ _editBlock;
}

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) AFDPrivacyPublishParamsModel *paramsModel;
@property (nonatomic) BOOL needUseCardUI;
@property (nonatomic) long long userTotalCount;
@property (copy, nonatomic) NSString *customTitle;
@property (copy, nonatomic) id /* block */ editBlock;
@property (nonatomic) BOOL needUpdate;

- (BOOL)needUpdate;
- (void)setNeedUpdate:(BOOL)arg0;
- (id)paramsModel;
- (void)setParamsModel:(id)arg0;
- (void)setNeedUseCardUI:(BOOL)arg0;
- (BOOL)needUseCardUI;
- (id)introText;
- (BOOL)isPublishScene;
- (void)updateXiguaPrivacyWithCellType:(unsigned long long)arg0;
- (long long)userTotalCount;
- (void)setUserTotalCount:(long long)arg0;
- (void)setEditBlock:(id /* block */)arg0;
- (id /* block */)editBlock;
- (id)exclusionTitle;
- (id)closeFriendsTitle;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)initWithType:(unsigned long long)arg0;
- (void)setType:(unsigned long long)arg0;
- (id)contentTitle;
- (BOOL)shouldShowEditButton;
- (id)visibleTitle;
- (id)customTitle;
- (void)setCustomTitle:(id)arg0;

@end
