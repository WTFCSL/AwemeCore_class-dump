//
//     Generated by private class-dump
//

@class NSString, AWEPLVHalfPageSectionLayout;
@protocol AWESectionLayoutProtocol;

@interface AWEPLVHalfLayoutSectionController : AWEPLVConstantSectionController <AWESectionLayoutProvider> {
    AWEPLVHalfPageSectionLayout *_layout;
}

@property (retain, nonatomic) AWEPLVHalfPageSectionLayout *layout;
@property (readonly, nonatomic) id<AWESectionLayoutProtocol> sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

- (id)sectionLayout;
- (void)setLayout:(id)arg0;
- (void).cxx_destruct;
- (id)layout;

@end