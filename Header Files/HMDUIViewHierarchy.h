//
//     Generated by private class-dump
//

@interface HMDUIViewHierarchy : NSObject {
    unsigned long long _maxFileCount;
    unsigned long long _clearFileCount;
}

@property (nonatomic) unsigned long long maxFileCount;
@property (nonatomic) unsigned long long clearFileCount;

+ (id)getDescriptionForUI:(id)arg0;
+ (id)shared;

- (unsigned long long)maxFileCount;
- (void)setMaxFileCount:(unsigned long long)arg0;
- (id)getViewHierarchy:(id)arg0 superView:(id)arg1 superVC:(id)arg2 withDetail:(BOOL)arg3 targetView:(id)arg4;
- (void)setClearFileCount:(unsigned long long)arg0;
- (id)getViewControllerNode:(id)arg0 withDetail:(BOOL)arg1;
- (id)getViewNode:(id)arg0 withDetail:(BOOL)arg1 targetView:(id)arg2;
- (void)updateConfigWithMaxFileCount:(unsigned long long)arg0 clearFileCount:(unsigned long long)arg1;
- (void)recordViewHierarchy:(id)arg0;
- (void)uploadViewHierarchyIfNeedWithTitle:(id)arg0 subTitle:(id)arg1;
- (unsigned long long)clearFileCount;

@end
