//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSURL, AWEAwemeModel, NSArray;

@interface AWEMediaDownloadOptions : NSObject {
    BOOL _shouldMuteVideo;
    BOOL _needsSaveToAlbum;
    BOOL _needsAssetAfterDownload;
    BOOL _authorIsCurrentUser;
    BOOL _awemeIsLongItem;
    BOOL _shouldShowLoading;
    BOOL _notBlockOperation;
    AWEAwemeModel *_awemeModel;
    unsigned long long _downloadType;
    NSURL *_destinationURL;
    NSString *_enterFrom;
    NSString *_previousPage;
    NSString *_feedPlayMode;
    NSDictionary *_extraLogInfo;
    NSString *_enterMethod;
    NSString *_sharePlatform;
    NSArray *_indicesToDownload;
}

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) unsigned long long downloadType;
@property (retain, nonatomic) NSURL *destinationURL;
@property (nonatomic) BOOL shouldMuteVideo;
@property (nonatomic) BOOL needsSaveToAlbum;
@property (nonatomic) BOOL needsAssetAfterDownload;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *feedPlayMode;
@property (copy, nonatomic) NSDictionary *extraLogInfo;
@property (nonatomic) BOOL authorIsCurrentUser;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *sharePlatform;
@property (nonatomic) BOOL awemeIsLongItem;
@property (nonatomic) BOOL shouldShowLoading;
@property (nonatomic) BOOL notBlockOperation;
@property (copy, nonatomic) NSArray *indicesToDownload;

- (id)awemeModel;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setAwemeModel:(id)arg0;
- (id)enterFrom;
- (id)sharePlatform;
- (void)setSharePlatform:(id)arg0;
- (void)setNeedsSaveToAlbum:(BOOL)arg0;
- (id)extraLogInfo;
- (void)setExtraLogInfo:(id)arg0;
- (BOOL)authorIsCurrentUser;
- (void)setAwemeIsLongItem:(BOOL)arg0;
- (void)setFeedPlayMode:(id)arg0;
- (void)setIndicesToDownload:(id)arg0;
- (id)feedPlayMode;
- (BOOL)awemeIsLongItem;
- (void)setAuthorIsCurrentUser:(BOOL)arg0;
- (id)indicesToDownload;
- (BOOL)needsSaveToAlbum;
- (BOOL)needsAssetAfterDownload;
- (BOOL)notBlockOperation;
- (BOOL)shouldMuteVideo;
- (void)setShouldMuteVideo:(BOOL)arg0;
- (void)setNeedsAssetAfterDownload:(BOOL)arg0;
- (void)setNotBlockOperation:(BOOL)arg0;
- (id)init;
- (unsigned long long)downloadType;
- (void).cxx_destruct;
- (void)setDownloadType:(unsigned long long)arg0;
- (void)setDestinationURL:(id)arg0;
- (id)destinationURL;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (BOOL)shouldShowLoading;
- (void)setShouldShowLoading:(BOOL)arg0;

@end
