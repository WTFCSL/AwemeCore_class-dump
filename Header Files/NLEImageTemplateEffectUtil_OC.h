//
//     Generated by private class-dump
//

@interface NLEImageTemplateEffectUtil_OC : NSObject

+ (BOOL)isInit;
+ (id)openImageTemplateAsEffect:(id)arg0 video_canvas_width:(int)arg1 video_canvas_height:(int)arg2 max_render_width:(int)arg3 max_render_height:(int)arg4 export_width_height_ratio:(float)arg5;
+ (id)getImageTemplateResources:(id)arg0;
+ (id)getImageTemplateResourcesWithTrack:(id)arg0;
+ (id)getImageTemplateResourcesWithSegment:(id)arg0;
+ (void)preloadImageTemplateEffect:(id)arg0;
+ (unsigned long long)acquireImageTemplateEffect:(id)arg0;
+ (void)prepareWith:(id)arg0 render_tree_cache_capacity:(int)arg1;
+ (void)replaceResourceManagerWith:(id)arg0;
+ (void)setSurfaceSize:(struct CGSize { double x0; double x1; })arg0;

@end
