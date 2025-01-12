//
//     Generated by private class-dump
//

@class NSString, IESECURLModel;

@interface IESECShopTabBadgeInfo : MTLModel <MTLJSONSerializing> {
    unsigned long long _badgeType;
    NSString *_badgeMessage;
    unsigned long long _badgeIconType;
    IESECURLModel *_badgeIcon;
}

@property (nonatomic) unsigned long long badgeType;
@property (copy, nonatomic) NSString *badgeMessage;
@property (nonatomic) unsigned long long badgeIconType;
@property (retain, nonatomic) IESECURLModel *badgeIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setBadgeIcon:(id)arg0;
- (id)badgeMessage;
- (void)setBadgeMessage:(id)arg0;
- (unsigned long long)badgeIconType;
- (void)setBadgeIconType:(unsigned long long)arg0;
- (id)badgeIcon;
- (void).cxx_destruct;
- (unsigned long long)badgeType;
- (void)setBadgeType:(unsigned long long)arg0;

@end
