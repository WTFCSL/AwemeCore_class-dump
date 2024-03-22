//
//     Generated by private class-dump
//

@class NSString, NSMutableSet, NSArray;

@interface IESECMallImagePrefetchManager : NSObject {
    BOOL _preloadFirstScreenImage;
    BOOL _preloadLoadmoreImage;
    BOOL _preloadGreatPromotionImage;
    long long _slideLoadImageNum;
    NSMutableSet *_preloadedURLs;
    NSString *_headerSectionID;
    NSString *_favoriteSectionID;
    NSArray *_preConnectDomains;
    double _lastPreConnectTimeStamp;
    double _preConnectInterval;
}

@property (nonatomic) BOOL preloadFirstScreenImage;
@property (nonatomic) BOOL preloadLoadmoreImage;
@property (nonatomic) long long slideLoadImageNum;
@property (nonatomic) BOOL preloadGreatPromotionImage;
@property (retain, nonatomic) NSMutableSet *preloadedURLs;
@property (copy, nonatomic) NSString *headerSectionID;
@property (copy, nonatomic) NSString *favoriteSectionID;
@property (copy, nonatomic) NSArray *preConnectDomains;
@property (nonatomic) double lastPreConnectTimeStamp;
@property (nonatomic) double preConnectInterval;

+ (id)sharedManager;

- (id)logExtra;
- (void)preloadPromotionImage:(id)arg0;
- (id)logExtraWithTag:(id)arg0;
- (double)preConnectInterval;
- (void)setPreConnectInterval:(double)arg0;
- (void)preConnectImageHostsIfNeeded;
- (void)preloadImageWithCellDisplayAtsection:(long long)arg0 index:(long long)arg1 sectionModels:(id)arg2;
- (void)setPreloadedURLs:(id)arg0;
- (BOOL)preloadFirstScreenImage;
- (id)headerSectionID;
- (id)favoriteSectionID;
- (void)preLoadImageFromConfig:(id)arg0 logExtra:(id)arg1;
- (BOOL)preloadLoadmoreImage;
- (long long)slideLoadImageNum;
- (id)preloadedURLs;
- (BOOL)preloadGreatPromotionImage;
- (id)ecNAMallPreloadImageOptKey;
- (id)ecNAMallPreloadImageOpt;
- (double)lastPreConnectTimeStamp;
- (id)preConnectDomains;
- (void)setLastPreConnectTimeStamp:(double)arg0;
- (void)preloadFirstScreenData:(id)arg0;
- (void)setPreloadFirstScreenImage:(BOOL)arg0;
- (void)setPreloadLoadmoreImage:(BOOL)arg0;
- (void)setSlideLoadImageNum:(long long)arg0;
- (void)setPreloadGreatPromotionImage:(BOOL)arg0;
- (void)setHeaderSectionID:(id)arg0;
- (void)setFavoriteSectionID:(id)arg0;
- (void)setPreConnectDomains:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
