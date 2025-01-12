//
//     Generated by private class-dump
//

@class CachalotContext, NSDictionary, NSString, NSIndexPath;

@protocol CachalotRenderPipelineComponentViewModel <NSObject>

@property (readonly, nonatomic) id componentDataModel;
@property (readonly, nonatomic) id componentRenderModel;
@property (readonly, nonatomic) id componentAttachmentModel;
@property (readonly, nonatomic) CachalotContext *componentContext;
@property (readonly, copy, nonatomic) NSDictionary *componentLogData;
@property (readonly, copy, nonatomic) NSString *viewModelId;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } layoutRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } stickyRect;
@property (readonly, nonatomic) NSIndexPath *indexPath;
@property (readonly, nonatomic) BOOL isOnFirstScreen;
@property (readonly, nonatomic) BOOL isPreRendering;
@property (readonly, nonatomic) BOOL isFromPreRender;
@property (readonly, nonatomic) BOOL isPreCreating;
@property (readonly, nonatomic) BOOL isFromPreCreate;
@property (readonly, nonatomic) BOOL isReusing;

- (id)componentContext;
- (id)viewModelId;
- (BOOL)isFromPreCreate;
- (id)componentDataModel;
- (void)setComponentDataModel:(id)arg0;
- (id)componentRenderModel;
- (void)setComponentAttachmentModel:(id)arg0;
- (id)componentAttachmentModel;
- (id)componentLogData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })stickyRect;
- (id)fetchParent;
- (id)fetchChildren;
- (BOOL)isPreRendering;
- (BOOL)isPreCreating;
- (BOOL)isFromPreRender;
- (BOOL)isReusing;
- (BOOL)isOnFirstScreen;
- (id)indexPath;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutRect;

@end
