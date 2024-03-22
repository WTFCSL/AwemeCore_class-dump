//
//     Generated by private class-dump
//

@class NSArray, NSDictionary, NSString, AWEUserModel, NSNumber;

@interface AFDCustomMorePopoverSheetControllerContext : NSObject <AFDCustomMorePopoverSheetControllerContextProtocol> {
    BOOL _hasRelationData;
    BOOL _disabledHighlight;
    AWEUserModel *_userModel;
    NSDictionary *_trackParams;
    NSArray *_typeSections;
    NSNumber *_targetPadding;
    unsigned long long _showMethod;
}

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL hasRelationData;
@property (copy, nonatomic) NSArray *typeSections;
@property (nonatomic) BOOL disabledHighlight;
@property (retain, nonatomic) NSNumber *targetPadding;
@property (nonatomic) unsigned long long showMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

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
- (id)init;
- (void).cxx_destruct;
- (id)userModel;
- (void)setUserModel:(id)arg0;

@end
