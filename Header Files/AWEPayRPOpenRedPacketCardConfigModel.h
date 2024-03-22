//
//     Generated by private class-dump
//

@class AWEIMDouyinRedPacketUserInfo, AWEIMDouyinRedPacketModel, NSString, NSArray, AWEIMDouyinRedPacketCoverModel;
@protocol AWEIMMessageProtocol;

@interface AWEPayRPOpenRedPacketCardConfigModel : NSObject {
    AWEIMDouyinRedPacketCoverModel *_coverModel;
    id<AWEIMMessageProtocol> _message;
    AWEIMDouyinRedPacketModel *_info;
    AWEIMDouyinRedPacketUserInfo *_user;
    unsigned long long _productType;
    NSString *_rpTitle;
    NSString *_avatarURL;
    NSString *_ownerName;
    NSString *_emotionUrl;
    NSArray *_users;
    long long _rpStatus;
    id /* block */ _openRedPackageBlock;
    id /* block */ _redirectToDetailBlock;
    id /* block */ _closeBlock;
    id /* block */ _trackerBlock;
}

@property (retain, nonatomic) AWEIMDouyinRedPacketCoverModel *coverModel;
@property (retain, nonatomic) id<AWEIMMessageProtocol> message;
@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (nonatomic) unsigned long long productType;
@property (copy, nonatomic) NSString *rpTitle;
@property (copy, nonatomic) NSString *avatarURL;
@property (copy, nonatomic) NSString *ownerName;
@property (copy, nonatomic) NSString *emotionUrl;
@property (retain, nonatomic) NSArray *users;
@property (nonatomic) long long rpStatus;
@property (readonly, nonatomic) BOOL needShowFooterView;
@property (readonly, copy, nonatomic) NSString *footText;
@property (copy, nonatomic) id /* block */ openRedPackageBlock;
@property (copy, nonatomic) id /* block */ redirectToDetailBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (void)setCoverModel:(id)arg0;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)coverModel;
- (void)setRpTitle:(id)arg0;
- (void)setEmotionUrl:(id)arg0;
- (void)setRpStatus:(long long)arg0;
- (void)setOpenRedPackageBlock:(id /* block */)arg0;
- (id /* block */)trackerBlock;
- (void)setTrackerBlock:(id /* block */)arg0;
- (id)rpTitle;
- (BOOL)needShowFooterView;
- (long long)rpStatus;
- (id /* block */)openRedPackageBlock;
- (id /* block */)redirectToDetailBlock;
- (id)footText;
- (id)emotionUrl;
- (void)setRedirectToDetailBlock:(id /* block */)arg0;
- (void)setUser:(id)arg0;
- (void)setMessage:(id)arg0;
- (unsigned long long)productType;
- (id)users;
- (id)info;
- (id)user;
- (void)setProductType:(unsigned long long)arg0;
- (void)setOwnerName:(id)arg0;
- (void).cxx_destruct;
- (id)message;
- (void)setInfo:(id)arg0;
- (id)ownerName;
- (void)setUsers:(id)arg0;

@end
