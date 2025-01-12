//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDLynxModuleData : NSObject {
    BOOL _iSOneCard;
    NSString *_groupID;
    NSString *_cardID;
    NSString *_storagePath;
    NSString *_verifyURL;
    NSString *_publishVersion;
    NSDictionary *_customFileds;
}

@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *storagePath;
@property (copy, nonatomic) NSString *verifyURL;
@property (copy, nonatomic) NSString *publishVersion;
@property (retain, nonatomic) NSDictionary *customFileds;
@property (nonatomic) BOOL iSOneCard;

- (id)verifyURL;
- (void)setVerifyURL:(id)arg0;
- (BOOL)iSOneCard;
- (id)publishVersion;
- (void)setPublishVersion:(id)arg0;
- (id)customFileds;
- (void)setCustomFileds:(id)arg0;
- (void)setISOneCard:(BOOL)arg0;
- (void)setGroupID:(id)arg0;
- (id)storagePath;
- (id)groupID;
- (void).cxx_destruct;
- (void)setStoragePath:(id)arg0;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end
