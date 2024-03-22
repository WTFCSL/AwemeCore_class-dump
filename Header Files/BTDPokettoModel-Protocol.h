//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@protocol BTDPokettoModel <NSObject, NSCoding, NSCopying>

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *extraValue;
@property (copy, nonatomic) NSString *openUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *appleId;
@property (copy, nonatomic) NSString *downloadUrl;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSArray *clickTrackUrlList;
@property (copy, nonatomic) NSArray *playTrackUrlList;
@property (copy, nonatomic) NSArray *playoverTrackUrlList;
@property (copy, nonatomic) NSArray *effectivePlayTrackUrlList;
@property (copy, nonatomic) NSDictionary *extra;
@property (nonatomic) unsigned long long index;
@property (nonatomic) double timeStamp;

- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setOpenUrl:(id)arg0;
- (void)setExtraValue:(id)arg0;
- (void)setWebUrl:(id)arg0;
- (void)setAppleId:(id)arg0;
- (void)setPlayTrackUrlList:(id)arg0;
- (void)setPlayoverTrackUrlList:(id)arg0;
- (void)setEffectivePlayTrackUrlList:(id)arg0;
- (id)playTrackUrlList;
- (id)playoverTrackUrlList;
- (id)effectivePlayTrackUrlList;
- (void)setTrackUrlList:(id)arg0;
- (void)setClickTrackUrlList:(id)arg0;
- (id)trackUrlList;
- (id)clickTrackUrlList;
- (id)openUrl;
- (id)webUrl;
- (id)extraValue;
- (void)setIndex:(unsigned long long)arg0;
- (double)timeStamp;
- (id)extra;
- (unsigned long long)index;
- (id)cid;
- (void)setTimeStamp:(double)arg0;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg0;
- (id)appleId;
- (void)setCid:(id)arg0;

@end