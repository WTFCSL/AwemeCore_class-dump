//
//     Generated by private class-dump
//

@class NSString, ACCMVCategoryModel, NSDictionary, NSNumber, NSMutableArray;
@protocol ACCMVTemplateModelProtocol;

@interface ACCClassicalMVTemplatesDataController : NSObject <ACCMVTemplatesDataControllerProtocol> {
    BOOL _hasMore;
    BOOL _isFromMusicDetail;
    BOOL _isRefreshing;
    NSMutableArray *_dataSource;
    NSNumber *_cursor;
    NSNumber *_longCursor;
    NSNumber *_sortedPosition;
    NSDictionary *_musicDetailTrackParams;
    NSDictionary *_extraParams;
    id<ACCMVTemplateModelProtocol> _sameMVTemplate;
}

@property (nonatomic) BOOL isRefreshing;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> sameMVTemplate;
@property (retain, nonatomic) ACCMVCategoryModel *categoryModel;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *longCursor;
@property (retain, nonatomic) NSNumber *sortedPosition;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (retain, nonatomic) NSDictionary *musicDetailTrackParams;
@property (nonatomic) BOOL isFromMusicDetail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setMusicDetailTrackParams:(id)arg0;
- (void)setIsFromMusicDetail:(BOOL)arg0;
- (BOOL)isFromMusicDetail;
- (id)musicDetailTrackParams;
- (void)setSameMVTemplate:(id)arg0;
- (void)loadMoreContentDataWithCompletion:(id /* block */)arg0;
- (id)sortedPosition;
- (void)setSortedPosition:(id)arg0;
- (void)refreshContentDataWithCompletion:(id /* block */)arg0;
- (id)longCursor;
- (void)setLongCursor:(id)arg0;
- (void)fetchUsageCountAndCollectState:(id)arg0 urlPrefix:(id)arg1 completion:(id /* block */)arg2;
- (id)sameMVTemplate;
- (id)cursor;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;
- (BOOL)isRefreshing;
- (void)setIsRefreshing:(BOOL)arg0;

@end
