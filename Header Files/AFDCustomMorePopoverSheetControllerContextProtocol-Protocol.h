//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, AWEUserModel, NSNumber;

@protocol AFDCustomMorePopoverSheetControllerContextProtocol <NSObject>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasRelationData;
@property (copy, nonatomic) NSArray *typeSections;
@property (nonatomic) BOOL disabledHighlight;
@property (retain, nonatomic) NSNumber *targetPadding;
@property (nonatomic) unsigned long long showMethod;

- (void)setTargetPadding:(id)arg0;
- (id)targetPadding;
- (id)trackParams;
- (void)setTrackParams:(id)arg0;
- (unsigned long long)showMethod;
- (void)setShowMethod:(unsigned long long)arg0;
- (BOOL)hasRelationData;
- (void)setHasRelationData:(BOOL)arg0;
- (id)typeSections;
- (void)setTypeSections:(id)arg0;
- (BOOL)disabledHighlight;
- (void)setDisabledHighlight:(BOOL)arg0;
- (id)userModel;
- (void)setUserModel:(id)arg0;

@end
