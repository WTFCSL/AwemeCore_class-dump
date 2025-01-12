//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveRevenueInteractLynxInteractModel : IESLiveRevenueInteractLynxModel {
    BOOL _isMatching;
    long long _inviteType;
    long long _matchType;
    long long _interactStartTime;
    NSString *_linkAnchorInfo;
    NSString *_seiData;
    NSString *_screenData;
}

@property (nonatomic) BOOL isMatching;
@property (nonatomic) long long inviteType;
@property (nonatomic) long long matchType;
@property (nonatomic) long long interactStartTime;
@property (copy, nonatomic) NSString *linkAnchorInfo;
@property (copy, nonatomic) NSString *seiData;
@property (copy, nonatomic) NSString *screenData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)seiData;
- (long long)inviteType;
- (void)setInviteType:(long long)arg0;
- (long long)interactStartTime;
- (void)setInteractStartTime:(long long)arg0;
- (id)screenData;
- (void)setIsMatching:(BOOL)arg0;
- (id)linkAnchorInfo;
- (void)setLinkAnchorInfo:(id)arg0;
- (void)setSeiData:(id)arg0;
- (void)setScreenData:(id)arg0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })containerFrame;
- (long long)matchType;
- (void)setMatchType:(long long)arg0;
- (BOOL)isMatching;

@end
