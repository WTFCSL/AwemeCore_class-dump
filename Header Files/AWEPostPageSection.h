//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPostPageSection : NSObject <IGListDiffable> {
    NSString *_headerId;
    Class _headerViewClass;
    double _headerHeight;
    NSString *_footerId;
    Class _footerViewClass;
    double _footerHeight;
    NSString *_diffId;
    NSArray *_elements;
    NSArray *_elementsSnapshots;
}

@property (copy, nonatomic) NSString *diffId;
@property (copy, nonatomic) NSArray *elements;
@property (copy, nonatomic) NSArray *elementsSnapshots;
@property (copy, nonatomic) NSString *headerId;
@property (nonatomic) Class headerViewClass;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *footerId;
@property (nonatomic) Class footerViewClass;
@property (nonatomic) double footerHeight;

+ (id)sectionWithElements:(id)arg0 center:(id)arg1;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setFooterId:(id)arg0;
- (id)diffId;
- (void)setDiffId:(id)arg0;
- (id)initWithElements:(id)arg0 center:(id)arg1;
- (id)headerId;
- (void)setHeaderId:(id)arg0;
- (id)footerId;
- (id)elementsSnapshots;
- (void)setElementsSnapshots:(id)arg0;
- (void)setElements:(id)arg0;
- (void).cxx_destruct;
- (id)elements;
- (double)headerHeight;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)setHeaderHeight:(double)arg0;
- (void)setFooterHeight:(double)arg0;
- (double)footerHeight;
- (Class)footerViewClass;
- (Class)headerViewClass;
- (void)setHeaderViewClass:(Class)arg0;
- (void)setFooterViewClass:(Class)arg0;

@end
