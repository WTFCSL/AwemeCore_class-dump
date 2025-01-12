//
//     Generated by private class-dump
//

@protocol NSObject;

@interface AWEPostPageCellElementDiffable : NSObject <IGListDiffable> {
    BOOL _isVisible;
    BOOL _isEnabled;
    BOOL _needsUpdate;
    id<NSObject> _diffId;
}

@property (nonatomic) BOOL isVisible;
@property (nonatomic) BOOL isEnabled;
@property (nonatomic) BOOL needsUpdate;
@property (copy, nonatomic) id<NSObject> diffId;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)diffId;
- (id)initWithCellElement:(id)arg0;
- (void)setDiffId:(id)arg0;
- (void)setNeedsUpdate:(BOOL)arg0;
- (BOOL)needsUpdate;
- (void).cxx_destruct;
- (void)setIsVisible:(BOOL)arg0;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg0;
- (BOOL)isEqual:(id)arg0;
- (BOOL)isVisible;

@end
