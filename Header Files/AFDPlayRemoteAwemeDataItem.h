//
//     Generated by private class-dump
//

@class NSArray, NSString, AWEAwemeModel, NSNumber, NSMutableArray;
@protocol AFDPlayRemoteAwemeDataItemDelegate;

@interface AFDPlayRemoteAwemeDataItem : NSObject <AFDPlayRemoteAwemeDataItemProtocol> {
    BOOL _isPause;
    BOOL _isActive;
    BOOL _isHost;
    BOOL _opStatus;
    AWEAwemeModel *_currentAweme;
    long long _currentAwemeProgress;
    NSArray *_awemeProgress;
    NSNumber *_currentAwemeSpeed;
    long long _totalCount;
    NSMutableArray *_awemeList;
    long long _currentPlayIndex;
    NSString *_currentContentString;
    id /* block */ _didScrollToModel;
    id<AFDPlayRemoteAwemeDataItemDelegate> _delegate;
}

@property (retain, nonatomic) AWEAwemeModel *currentAweme;
@property (nonatomic) long long currentAwemeProgress;
@property (copy, nonatomic) NSArray *awemeProgress;
@property (nonatomic) BOOL isPause;
@property (retain, nonatomic) NSNumber *currentAwemeSpeed;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) NSMutableArray *awemeList;
@property (nonatomic) long long currentPlayIndex;
@property (nonatomic) BOOL isActive;
@property (nonatomic) BOOL isHost;
@property (nonatomic) BOOL opStatus;
@property (retain, nonatomic) NSString *currentContentString;
@property (copy, nonatomic) id /* block */ didScrollToModel;
@property (weak, nonatomic) id<AFDPlayRemoteAwemeDataItemDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)currentAweme;
- (id)awemeList;
- (void)setAwemeList:(id)arg0;
- (long long)currentPlayIndex;
- (void)setCurrentPlayIndex:(long long)arg0;
- (BOOL)isPause;
- (void)setIsPause:(BOOL)arg0;
- (void)setCurrentAweme:(id)arg0;
- (void)setIsHost:(BOOL)arg0;
- (void)setDidScrollToModel:(id /* block */)arg0;
- (BOOL)opStatus;
- (long long)currentAwemeProgress;
- (id)awemeProgress;
- (void)clearAwemeList;
- (void)setOpStatus:(BOOL)arg0;
- (void)setCurrentContentString:(id)arg0;
- (void)scrollToAwemeModel:(id)arg0;
- (void)setCurrentAwemeProgress:(long long)arg0;
- (void)setAwemeProgress:(id)arg0;
- (void)setCurrentAwemeSpeed:(id)arg0;
- (id)findModelWithItemID:(id)arg0;
- (id)currentAwemeSpeed;
- (void)removeAwemeModelAndScrollToNext:(id)arg0;
- (void)scrollToNextAwemeModel:(id)arg0;
- (BOOL)scrollToLastAwemeModel:(id)arg0;
- (void)insertAwemeList:(id)arg0 currentID:(id)arg1;
- (void)updateAwemeModelIndex:(id)arg0;
- (void)replaceAwemeModel:(id)arg0 withModel:(id)arg1;
- (BOOL)containsAweme:(id)arg0;
- (BOOL)playRemoteEnableProgressSlider;
- (id)__awemeIDListFromAwemeModels:(id)arg0;
- (void)__log:(id)arg0;
- (id /* block */)didScrollToModel;
- (id)currentContentString;
- (id)init;
- (void).cxx_destruct;
- (void)setIsActive:(BOOL)arg0;
- (id)delegate;
- (BOOL)isActive;
- (void)setDelegate:(id)arg0;
- (long long)totalCount;
- (BOOL)isHost;
- (void)setTotalCount:(long long)arg0;

@end