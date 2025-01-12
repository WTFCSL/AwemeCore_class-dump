//
//     Generated by private class-dump
//

@class IESLiveAnchorInteractiveGameOpenPlatformGameExtra, NSString, NSArray, IESLiveAnchorInteractiveBaseExtra;

@interface IESLiveAnchorInteractiveGameModel : IESLiveDynamicModel <NSCoding> {
    BOOL _isRecordToolAuth;
    NSString *_subTitle;
    NSString *_extendExtra;
    NSArray *_callServerScenes;
    NSString *_opendId;
}

@property (nonatomic) unsigned long long interactID;
@property (retain, nonatomic) IESLiveAnchorInteractiveBaseExtra *baseExtra;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *iconURL;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long reddotCount;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *extendExtra;
@property (copy, nonatomic) NSArray *callServerScenes;
@property (retain, nonatomic) IESLiveAnchorInteractiveGameOpenPlatformGameExtra *openPlatformExtra;
@property (nonatomic) unsigned long long explainStatus;
@property (readonly, nonatomic) unsigned long long shareScreenStatus;
@property (copy, nonatomic) NSString *opendId;
@property (nonatomic) BOOL isRecordToolAuth;

- (long long)gameId;
- (BOOL)isXplay;
- (unsigned long long)shareScreenStatusViaScene:(unsigned long long)arg0;
- (unsigned long long)shareScreenStatus;
- (id)extendExtra;
- (void)setExtendExtra:(id)arg0;
- (id)callServerScenes;
- (void)setCallServerScenes:(id)arg0;
- (id)reddotIdentifier;
- (BOOL)showReddot;
- (BOOL)isSupportLiveEntranceWithInteractiveScene:(unsigned long long)arg0;
- (BOOL)isSupportLiveScene:(unsigned long long)arg0;
- (id)nativeAppID;
- (void)resolveExtra;
- (id)tipIdentifierPrefix;
- (BOOL)isPKSpecialBattle;
- (BOOL)pr_isNonGameItem;
- (id)createNewGameModel;
- (void)resolveExplainCardExtra:(id)arg0;
- (id)opendId;
- (void)setOpendId:(id)arg0;
- (BOOL)isRecordToolAuth;
- (void)setIsRecordToolAuth:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)identifier;
- (id)initWithCoder:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (void)encodeWithCoder:(id)arg0;
- (id)subTitle;

@end
