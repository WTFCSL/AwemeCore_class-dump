//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEHPTrackContextModel : NSObject {
    BOOL _isTopBarSlidable;
    BOOL _hasEditBtn;
    NSArray *_selectedTabIDs;
    long long _totalShowNum;
}

@property (copy, nonatomic) NSArray *selectedTabIDs;
@property (nonatomic) long long totalShowNum;
@property (nonatomic) BOOL isTopBarSlidable;
@property (nonatomic) BOOL hasEditBtn;

- (void)setTotalShowNum:(long long)arg0;
- (void)setSelectedTabIDs:(id)arg0;
- (void)setIsTopBarSlidable:(BOOL)arg0;
- (void)setHasEditBtn:(BOOL)arg0;
- (id)selectedTabIDs;
- (long long)totalShowNum;
- (BOOL)isTopBarSlidable;
- (BOOL)hasEditBtn;
- (void).cxx_destruct;

@end
