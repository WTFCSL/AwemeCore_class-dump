//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDLOCMetaData : NSObject {
    NSString *_appid;
    NSArray *_urls;
    NSString *_md5;
    NSString *_target;
}

@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSArray *urls;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *target;

- (void)setUpPkgUrlsWithTarget:(id)arg0 dic:(id)arg1 ttcode:(id)arg2;
- (id)urls;
- (void).cxx_destruct;
- (void)setTarget:(id)arg0;
- (id)target;
- (void)setUrls:(id)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (id)appid;
- (void)setAppid:(id)arg0;

@end
