//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface BDLOneCardMetaData : NSObject {
    BOOL _inner_developer;
    NSArray *_pkg_paths;
    NSString *_pkg_md5;
    NSString *_version;
    NSString *_groupID;
    NSString *_cardID;
    NSString *_verify_url;
}

@property (retain) NSArray *pkg_paths;
@property (retain) NSString *pkg_md5;
@property (retain) NSString *version;
@property (retain) NSString *groupID;
@property (retain) NSString *cardID;
@property (retain) NSString *verify_url;
@property BOOL inner_developer;

- (id)pkg_paths;
- (id)pkg_md5;
- (id)verify_url;
- (BOOL)inner_developer;
- (void)setPkg_paths:(id)arg0;
- (void)setPkg_md5:(id)arg0;
- (void)setVerify_url:(id)arg0;
- (void)setInner_developer:(BOOL)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)version;
- (id)cardID;
- (void)setCardID:(id)arg0;

@end