//
//     Generated by private class-dump
//

@class NSString, NSDictionary, UIImage, NSArray, NSMutableArray;

@interface AWESearchScanDataContext : NSObject {
    BOOL _supportPublish;
    BOOL _showBG;
    BOOL _showSelector;
    BOOL _fixTopViewBoxScaleEnable;
    BOOL _shouldCancleSearch;
    NSDictionary *_initialParmas;
    UIImage *_image;
    NSString *_pageType;
    long long _scanType;
    NSString *_scanTypeStr;
    long long _scanFromTab;
    double _pageRatio;
    NSString *_tosURL;
    NSString *_scanData;
    NSString *_enterFrom;
    NSString *_searchFrom;
    NSString *_searchFromSecond;
    NSString *_timestamp;
    NSString *_scanID;
    NSString *_openSearchPage;
    NSString *_authorID;
    NSString *_groupID;
    NSString *_mmobjectTag;
    NSString *_tagUID;
    NSString *_realityTagName;
    long long _itemPlayTime;
    NSString *_picID;
    NSDictionary *_logExtraDic;
    NSString *_scanBalanceStatus;
    NSArray *_cropArray;
    NSMutableArray *_detectionList;
    NSMutableArray *_labelArray;
    NSDictionary *_searchDetectionDic;
    NSDictionary *_searchLabel;
    NSString *_federationInfo;
    NSString *_multiQueryThumbnailURL;
    NSString *_multiQueryOriginalURL;
    NSString *_multiQueryWord;
    NSString *_entranceTagName;
    NSArray *_currentSuggestWords;
}

@property (retain, nonatomic) NSMutableArray *detectionList;
@property (retain, nonatomic) NSMutableArray *labelArray;
@property (copy, nonatomic) NSDictionary *initialParmas;
@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *pageType;
@property (nonatomic) long long scanType;
@property (copy, nonatomic) NSString *scanTypeStr;
@property (nonatomic) long long scanFromTab;
@property (nonatomic) BOOL supportPublish;
@property (nonatomic) double pageRatio;
@property (nonatomic) BOOL showBG;
@property (copy, nonatomic) NSString *tosURL;
@property (copy, nonatomic) NSString *scanData;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchFrom;
@property (copy, nonatomic) NSString *searchFromSecond;
@property (nonatomic) BOOL showSelector;
@property (copy, nonatomic) NSString *timestamp;
@property (copy, nonatomic) NSString *scanID;
@property (copy, nonatomic) NSString *openSearchPage;
@property (copy, nonatomic) NSString *authorID;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *mmobjectTag;
@property (copy, nonatomic) NSString *tagUID;
@property (copy, nonatomic) NSString *realityTagName;
@property (nonatomic) long long itemPlayTime;
@property (copy, nonatomic) NSString *picID;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (nonatomic) BOOL fixTopViewBoxScaleEnable;
@property (copy, nonatomic) NSString *scanBalanceStatus;
@property (copy, nonatomic) NSArray *cropArray;
@property (copy, nonatomic) NSDictionary *searchDetectionDic;
@property (copy, nonatomic) NSDictionary *searchLabel;
@property (copy, nonatomic) NSString *federationInfo;
@property (copy, nonatomic) NSString *multiQueryThumbnailURL;
@property (copy, nonatomic) NSString *multiQueryOriginalURL;
@property (copy, nonatomic) NSString *multiQueryWord;
@property (copy, nonatomic) NSString *entranceTagName;
@property (nonatomic) BOOL shouldCancleSearch;
@property (copy, nonatomic) NSArray *currentSuggestWords;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)logExtraDic;
- (void)setLogExtraDic:(id)arg0;
- (void)setLabelArray:(id)arg0;
- (void)setSearchLabel:(id)arg0;
- (void)setFixTopViewBoxScaleEnable:(BOOL)arg0;
- (BOOL)showBG;
- (void)setShowBG:(BOOL)arg0;
- (id)searchFrom;
- (void)setSearchFrom:(id)arg0;
- (id)searchFromSecond;
- (void)setSearchFromSecond:(id)arg0;
- (BOOL)showSelector;
- (void)setShowSelector:(BOOL)arg0;
- (id)federationInfo;
- (void)setFederationInfo:(id)arg0;
- (id)picID;
- (void)setPicID:(id)arg0;
- (double)visualResultPanelDefaultState;
- (id)openSearchPage;
- (void)setOpenSearchPage:(id)arg0;
- (void)setScanFromTab:(long long)arg0;
- (void)setScanTypeStr:(id)arg0;
- (id)detectionList;
- (BOOL)shouldSetFillMode;
- (id)initialParmas;
- (void)setInitialParmas:(id)arg0;
- (id)scanTypeStr;
- (long long)scanFromTab;
- (BOOL)supportPublish;
- (void)setSupportPublish:(BOOL)arg0;
- (double)pageRatio;
- (void)setPageRatio:(double)arg0;
- (id)tosURL;
- (void)setTosURL:(id)arg0;
- (id)scanData;
- (void)setScanData:(id)arg0;
- (id)scanID;
- (void)setScanID:(id)arg0;
- (id)mmobjectTag;
- (void)setMmobjectTag:(id)arg0;
- (id)tagUID;
- (void)setTagUID:(id)arg0;
- (id)realityTagName;
- (void)setRealityTagName:(id)arg0;
- (long long)itemPlayTime;
- (void)setItemPlayTime:(long long)arg0;
- (BOOL)fixTopViewBoxScaleEnable;
- (id)scanBalanceStatus;
- (void)setScanBalanceStatus:(id)arg0;
- (id)cropArray;
- (void)setCropArray:(id)arg0;
- (void)setDetectionList:(id)arg0;
- (id)searchDetectionDic;
- (void)setSearchDetectionDic:(id)arg0;
- (id)multiQueryThumbnailURL;
- (void)setMultiQueryThumbnailURL:(id)arg0;
- (id)multiQueryOriginalURL;
- (void)setMultiQueryOriginalURL:(id)arg0;
- (id)multiQueryWord;
- (void)setMultiQueryWord:(id)arg0;
- (id)entranceTagName;
- (void)setEntranceTagName:(id)arg0;
- (BOOL)shouldCancleSearch;
- (void)setShouldCancleSearch:(BOOL)arg0;
- (id)currentSuggestWords;
- (void)setCurrentSuggestWords:(id)arg0;
- (id)pageType;
- (void)setGroupID:(id)arg0;
- (id)init;
- (id)groupID;
- (id)timestamp;
- (void).cxx_destruct;
- (id)image;
- (id)searchLabel;
- (long long)scanType;
- (void)setImage:(id)arg0;
- (void)setTimestamp:(id)arg0;
- (void)setPageType:(id)arg0;
- (void)setScanType:(long long)arg0;
- (id)labelArray;
- (id)authorID;
- (void)setAuthorID:(id)arg0;

@end
