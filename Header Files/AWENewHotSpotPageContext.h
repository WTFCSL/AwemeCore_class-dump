//
//     Generated by private class-dump
//

@class AWEAwemeModel, NSString, NSDictionary, AWENewContainerHotSpotModel, NSSet, NSNumber, AWEHotSpotNewShareInfoModel;

@interface AWENewHotSpotPageContext : NSObject {
    BOOL _isHeaderUnfold;
    BOOL _needGrayScale;
    NSString *_keyword;
    NSString *_hotSpotID;
    NSDictionary *_logPassback;
    NSString *_fromGroupId;
    NSString *_sentenceTag;
    NSString *_hotSpotServiceID;
    NSString *_defaultCommentPlaceholder;
    long long _landingTabType;
    NSString *_imCardData;
    NSDictionary *_insertInfo;
    NSString *_insertCommentReplyID;
    AWENewContainerHotSpotModel *_containerNewHotSpotModel;
    NSNumber *_ugcType;
    AWEHotSpotNewShareInfoModel *_shareInfo;
    NSString *_enterMethod;
    NSString *_previousPage;
    NSString *_hotListParams;
    NSDictionary *_logExtraDict;
    NSSet *_viewTextContentSet;
    NSSet *_viewVideoContentSet;
    AWEAwemeModel *_shootInfoAweme;
}

@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSString *fromGroupId;
@property (copy, nonatomic) NSString *sentenceTag;
@property (copy, nonatomic) NSString *hotSpotServiceID;
@property (copy, nonatomic) NSString *defaultCommentPlaceholder;
@property (nonatomic) long long landingTabType;
@property (copy, nonatomic) NSString *imCardData;
@property (retain, nonatomic) NSDictionary *insertInfo;
@property (copy, nonatomic) NSString *insertCommentReplyID;
@property (retain, nonatomic) AWENewContainerHotSpotModel *containerNewHotSpotModel;
@property (retain, nonatomic) NSNumber *ugcType;
@property (retain, nonatomic) AWEHotSpotNewShareInfoModel *shareInfo;
@property (nonatomic) BOOL isHeaderUnfold;
@property (nonatomic) BOOL needGrayScale;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *hotListParams;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSSet *viewTextContentSet;
@property (copy, nonatomic) NSSet *viewVideoContentSet;
@property (weak, nonatomic) AWEAwemeModel *shootInfoAweme;

- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)logPassback;
- (void)setLogPassback:(id)arg0;
- (void)setFromGroupId:(id)arg0;
- (id)hotSpotServiceID;
- (id)hotSpotID;
- (id)fromGroupId;
- (id)ugcType;
- (void)setUgcType:(id)arg0;
- (BOOL)isHeaderUnfold;
- (void)setIsHeaderUnfold:(BOOL)arg0;
- (id)hotListParams;
- (void)setHotListParams:(id)arg0;
- (void)setHotSpotID:(id)arg0;
- (BOOL)needGrayScale;
- (long long)landingTabType;
- (id)insertInfo;
- (void)setInsertInfo:(id)arg0;
- (void)setInsertCommentReplyID:(id)arg0;
- (id)insertCommentReplyID;
- (void)setLandingTabType:(long long)arg0;
- (id)viewVideoContentSet;
- (void)setViewVideoContentSet:(id)arg0;
- (id)containerNewHotSpotModel;
- (void)setContainerNewHotSpotModel:(id)arg0;
- (void)setHotSpotServiceID:(id)arg0;
- (void)setDefaultCommentPlaceholder:(id)arg0;
- (void)setNeedGrayScale:(BOOL)arg0;
- (id)imCardData;
- (void)setImCardData:(id)arg0;
- (id)shootInfoAweme;
- (id)defaultCommentPlaceholder;
- (id)viewTextContentSet;
- (void)setShootInfoAweme:(id)arg0;
- (void)setViewTextContentSet:(id)arg0;
- (void).cxx_destruct;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setKeyword:(id)arg0;
- (id)keyword;
- (id)sentenceTag;
- (void)setSentenceTag:(id)arg0;

@end
