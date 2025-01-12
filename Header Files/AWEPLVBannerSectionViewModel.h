//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEPLVPageContext, AWEPLVBannerSectionConfig;
@protocol AWEPLVSectionModelProtocol;

@interface AWEPLVBannerSectionViewModel : AWEPadBannerSectionViewModel <AWEPLVSectionViewModelProtocol> {
    BOOL canShow;
    BOOL enableNewArch;
    id<AWEPLVSectionModelProtocol> sectionModel;
    long long sectionIndex;
    NSString *enterFrom;
    NSDictionary *logPB;
    NSString *pageKey;
    long long maxLines;
    NSString *_sectionName;
    AWEPLVPageContext *pageContext;
    AWEPLVBannerSectionConfig *_sectionConfig;
}

@property (retain, nonatomic) AWEPLVBannerSectionConfig *sectionConfig;
@property (retain, nonatomic) id<AWEPLVSectionModelProtocol> sectionModel;
@property (nonatomic) long long sectionIndex;
@property (readonly, nonatomic) BOOL canShow;
@property (nonatomic) BOOL enableNewArch;
@property (nonatomic) long long maxLines;
@property (copy, nonatomic) NSString *sectionName;
@property (copy, nonatomic) NSString *pageKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSDictionary *logPB;
@property (retain, nonatomic) AWEPLVPageContext *pageContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (BOOL)canShow;
- (id)enterFrom;
- (id)sectionConfig;
- (void)setSectionConfig:(id)arg0;
- (id)pageKey;
- (void)setPageKey:(id)arg0;
- (id)logPB;
- (id)sectionModel;
- (void)setSectionModel:(id)arg0;
- (void)setLogPB:(id)arg0;
- (BOOL)enableNewArch;
- (void)setEnableNewArch:(BOOL)arg0;
- (double)bannerCornerRadius;
- (void).cxx_destruct;
- (void)setMaxLines:(long long)arg0;
- (long long)maxLines;
- (long long)sectionIndex;
- (void)setSectionIndex:(long long)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;
- (id)sectionName;
- (void)setSectionName:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })inset;

@end
