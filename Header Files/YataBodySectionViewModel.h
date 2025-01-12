//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface YataBodySectionViewModel : NSObject <YataSectionViewModel> {
    long long _viewHolderArrayState;
    NSArray *_finalStateViewHolderArray;
    NSArray *_animationIntermediateViewHolderArray;
    Class _sectionClass;
}

@property (nonatomic) long long viewHolderArrayState;
@property (retain, nonatomic) NSArray *finalStateViewHolderArray;
@property (retain, nonatomic) NSArray *animationIntermediateViewHolderArray;
@property (retain, nonatomic) Class sectionClass;
@property (readonly, nonatomic) NSArray *viewHolderArray;
@property (readonly, nonatomic) BOOL hasPendingNodeAnimations;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sectionModelWithClass:(Class)arg0;
+ (Class)sectionClass;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (id)viewHolderArray;
- (BOOL)hasPendingNodeAnimations;
- (void)changeViewHolderArrayState:(long long)arg0;
- (void)updateWithViewHolderDict:(id)arg0 seqKeyArray:(id)arg1 animationIntermediateSeqKeyArray:(id)arg2;
- (void)setViewHolderArrayState:(long long)arg0;
- (long long)viewHolderArrayState;
- (id)animationIntermediateViewHolderArray;
- (id)finalStateViewHolderArray;
- (void)setAnimationIntermediateViewHolderArray:(id)arg0;
- (void)setFinalStateViewHolderArray:(id)arg0;
- (void).cxx_destruct;
- (Class)sectionClass;
- (void)setSectionClass:(Class)arg0;

@end
