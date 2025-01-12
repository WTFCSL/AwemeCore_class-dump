//
//     Generated by private class-dump
//

@class NSString, BDNovelComicOpenModel, BDNovelComicItem;

@interface BDNovelComicTracker : NSObject {
    BOOL _isGoNovelReader;
    BOOL _isGoDetail;
    BDNovelComicItem *_currentItem;
    NSString *_nextEnterFrom;
    NSString *_currentEnterFrom;
    BDNovelComicOpenModel *_openModel;
    double _goDetailStamp;
    double _goNovelReaderStamp;
    double _goComicCatalogStamp;
    double _isGoComicCatalog;
    double _isViewAppear;
}

@property (retain, nonatomic) BDNovelComicItem *currentItem;
@property (copy, nonatomic) NSString *nextEnterFrom;
@property (copy, nonatomic) NSString *currentEnterFrom;
@property (nonatomic) BOOL isGoNovelReader;
@property (nonatomic) BOOL isGoDetail;
@property (retain, nonatomic) BDNovelComicOpenModel *openModel;
@property (nonatomic) double goDetailStamp;
@property (nonatomic) double goNovelReaderStamp;
@property (nonatomic) double goComicCatalogStamp;
@property (nonatomic) double isGoComicCatalog;
@property (nonatomic) double isViewAppear;

+ (void)eventV3:(id)arg0 params:(id)arg1;
+ (void)showBookEnd:(id)arg0;
+ (void)clickBook:(id)arg0;
+ (void)clickBookEnd:(id)arg0 content:(id)arg1 module:(id)arg2;
+ (void)showBook:(id)arg0;
+ (void)readerSettings:(id)arg0;

- (id)commonParams;
- (id)openModel;
- (void)setOpenModel:(id)arg0;
- (void)addBookShelf:(id)arg0;
- (void)clickReader:(id)arg0 content:(id)arg1;
- (void)clickLocationFeature;
- (void)showLocationFeature;
- (void)showReaderCover:(id)arg0;
- (void)enterCoverPage;
- (void)setCurrentEnterFrom:(id)arg0;
- (void)receiveWillEnterForeground:(id)arg0;
- (void)receiveDidEnterBackground:(id)arg0;
- (double)isViewAppear;
- (void)setGoDetailStamp:(double)arg0;
- (void)setGoNovelReaderStamp:(double)arg0;
- (void)startTrack;
- (void)endTrack;
- (void)setIsViewAppear:(double)arg0;
- (void)goDetail;
- (void)goNovelReader;
- (void)stayPage;
- (void)stayNovelReader;
- (BOOL)isGoDetail;
- (void)setIsGoDetail:(BOOL)arg0;
- (id)currentEnterFrom;
- (double)goDetailStamp;
- (BOOL)isGoNovelReader;
- (void)setIsGoNovelReader:(BOOL)arg0;
- (id)nextEnterFrom;
- (double)goNovelReaderStamp;
- (void)setGoComicCatalogStamp:(double)arg0;
- (void)setIsGoComicCatalog:(double)arg0;
- (double)isGoComicCatalog;
- (double)goComicCatalogStamp;
- (void)viewAppear;
- (void)viewDisAppear;
- (void)enterNovelSDKWithOpenModel:(id)arg0;
- (void)clickReaderCover:(id)arg0;
- (void)showSettingPannel:(id)arg0;
- (void)goComicCatalog;
- (void)stayComicCatalog;
- (void)showNovelReaderMemberShip:(id)arg0 type:(id)arg1;
- (void)clickNovelReaderMemberShip:(id)arg0 type:(id)arg1;
- (void)showNovelPopup:(id)arg0 popupType:(id)arg1;
- (void)clickNovelPopup:(id)arg0 popupType:(id)arg1 clickedContent:(id)arg2;
- (void)requestNovelDisplayAds:(id)arg0;
- (void)showNovelAd:(id)arg0 adPosition:(id)arg1;
- (void)clickNovelAd:(id)arg0 adPosition:(id)arg1;
- (void)adPurchaseResult:(id)arg0 adPosition:(id)arg1 result:(id)arg2;
- (void)setNextEnterFrom:(id)arg0;
- (id)init;
- (void)setCurrentItem:(id)arg0;
- (void).cxx_destruct;
- (id)currentItem;
- (void)dealloc;

@end
