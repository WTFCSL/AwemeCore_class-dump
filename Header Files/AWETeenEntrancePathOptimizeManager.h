//
//     Generated by private class-dump
//

@class NSString;

@interface AWETeenEntrancePathOptimizeManager : HTSService <AWETeenModeEntrancePathOptimizeService> {
    BOOL _newUserDidSkipAgeSelection;
    BOOL _showOptimizeV2AgeGuide;
    long long _selectedAgeScopeType;
}

@property (nonatomic) BOOL newUserDidSkipAgeSelection;
@property (nonatomic) BOOL showOptimizeV2AgeGuide;
@property (nonatomic) long long selectedAgeScopeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)teenEntrancePathOptimizeEnable;
- (unsigned long long)teenEntrancePathOptimizeType;
- (id)teenEntrancePathOptimizeV1RouterString;
- (void)enterPasswordVC:(id)arg0;
- (BOOL)newUserDidSkipAgeSelection;
- (void)setNewUserDidSkipAgeSelection:(BOOL)arg0;
- (BOOL)showOptimizeV2AgeGuide;
- (void)setShowOptimizeV2AgeGuide:(BOOL)arg0;
- (long long)selectedAgeScopeType;
- (void)setSelectedAgeScopeType:(long long)arg0;

@end
