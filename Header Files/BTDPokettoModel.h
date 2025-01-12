//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface BTDPokettoModel : NSObject <BTDPokettoModel> {
    NSString *cid;
    NSString *logExtra;
    NSString *extraValue;
    NSString *appleId;
    NSString *downloadUrl;
    NSString *openUrl;
    NSString *webUrl;
    NSArray *clickTrackUrlList;
    NSArray *effectivePlayTrackUrlList;
    NSArray *playTrackUrlList;
    NSArray *playoverTrackUrlList;
    NSArray *trackUrlList;
    unsigned long long index;
    double timeStamp;
}

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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)init;
- (void).cxx_destruct;
- (id)copy;
- (double)timeStamp;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (unsigned long long)index;
- (id)cid;
- (id)initWithCoder:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (void)setTimeStamp:(double)arg0;
- (id)downloadUrl;
- (void)setDownloadUrl:(id)arg0;
- (id)appleId;
- (void)setCid:(id)arg0;

@end
