//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEDetailDiffableMultiModelObject : NSObject <AWEDetailDiffableMultiModelObject> {
    double _awemeSectionInsetTop;
    NSArray *_viewModelArray;
}

@property (copy, nonatomic) NSArray *viewModelArray;
@property (nonatomic) double awemeSectionInsetTop;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)viewModelArray;
- (double)awemeSectionInsetTop;
- (void)appendWithModelArray:(id)arg0;
- (void)setViewModelArray:(id)arg0;
- (void)replaceWithModelArray:(id)arg0;
- (id)initWithViewModelArray:(id)arg0;
- (void)setAwemeSectionInsetTop:(double)arg0;
- (void).cxx_destruct;

@end