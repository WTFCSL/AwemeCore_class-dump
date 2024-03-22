//
//     Generated by private class-dump
//

@class NSString, AWEProfileHeaderContext, NSMutableDictionary;

@interface AWEProfileHeaderNameAreaSectionViewModel : AWEBaseListSectionViewModel <AWEUserMessage, AWEProfileHeaderSectionViewModelProtocol, AWEProfileHeaderNameAreaSectionProtocol> {
    BOOL _nameLabelHeightUpdated;
    BOOL _showRemarkNameEntrance;
    BOOL _followStatusChanged;
    BOOL _finishSetRemarkName;
    BOOL _switchButtonHidden;
    BOOL _updateNameLabel;
    AWEProfileHeaderContext *_context;
    NSString *_avatarAccessibilityLabel;
    double _nameLabelHeight;
    double _footerHeight;
    NSMutableDictionary *_nameHeightCache;
    NSMutableDictionary *_verifyHeightCache;
}

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) NSMutableDictionary *nameHeightCache;
@property (retain, nonatomic) NSMutableDictionary *verifyHeightCache;
@property (copy, nonatomic) NSString *avatarAccessibilityLabel;
@property (nonatomic) BOOL nameLabelHeightUpdated;
@property (nonatomic) double nameLabelHeight;
@property (nonatomic) BOOL showRemarkNameEntrance;
@property (nonatomic) BOOL followStatusChanged;
@property (nonatomic) BOOL finishSetRemarkName;
@property (nonatomic) BOOL switchButtonHidden;
@property (nonatomic) BOOL updateNameLabel;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)trackNameAreaTagEvent:(unsigned long long)arg0 withModel:(id)arg1 referString:(id)arg2;

- (void)didFinishUnFollowUser:(id)arg0 status:(long long)arg1 error:(id)arg2;
- (void)didFinishBlockUser:(id)arg0 status:(long long)arg1;
- (void)didFinishSetRemarkWithUser:(id)arg0;
- (void)configWithContext:(id)arg0;
- (double)nameLabelHeight;
- (void)setSwitchButtonHidden:(BOOL)arg0;
- (BOOL)switchButtonHidden;
- (void)setNameLabelHeight:(double)arg0;
- (double)topPaddingWithUpperSection:(long long)arg0;
- (double)bottomPaddingWithLowerSection:(long long)arg0;
- (id)avatarAccessibilityLabel;
- (void)setAvatarAccessibilityLabel:(id)arg0;
- (void)setShowRemarkNameEntrance:(BOOL)arg0;
- (BOOL)showRemarkNameEntrance;
- (BOOL)finishSetRemarkName;
- (void)setNameLabelHeightUpdated:(BOOL)arg0;
- (id)nameHeightCache;
- (id)verifyHeightCache;
- (double)__nameHeight:(id)arg0;
- (double)__verifyHeight:(id)arg0;
- (void)p_userFollowStatusDidChange:(id)arg0;
- (void)setFollowStatusChanged:(BOOL)arg0;
- (double)sectionHeightForLargeBanner:(id)arg0;
- (void)setFinishSetRemarkName:(BOOL)arg0;
- (void)setUpdateNameLabel:(BOOL)arg0;
- (double)refreshNameLabelTopPadding:(id)arg0;
- (BOOL)nameLabelHeightUpdated;
- (BOOL)followStatusChanged;
- (void)setNameHeightCache:(id)arg0;
- (void)setVerifyHeightCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (id)context;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sectionSize;
- (double)footerHeight;
- (BOOL)updateNameLabel;

@end
