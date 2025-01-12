//
//     Generated by private class-dump
//

@class AWETeenHotListDataController, AWETeenFeedDoubleColumnSectionViewModel;

@interface AWETeenFeedDoubleColumnViewModel : AWEBaseListViewModel {
    AWETeenHotListDataController *_dataController;
    long long _dataCount;
    AWETeenFeedDoubleColumnSectionViewModel *_sectionViewModel;
    long long _requestCount;
}

@property (retain, nonatomic) AWETeenHotListDataController *dataController;
@property (retain, nonatomic) AWETeenFeedDoubleColumnSectionViewModel *sectionViewModel;
@property (nonatomic) long long requestCount;
@property (nonatomic) long long dataCount;

- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (BOOL)isRequestOnAir;
- (BOOL)canRefresh;
- (double)p_processStartTime;
- (BOOL)p_processInfoForPID:(int)arg0 procInfo:(struct kinfo_proc { struct extern_proc { union { struct { struct proc *x0; struct proc *x1; } x0; struct timeval { long long x0; int x1; } x1; } x0; struct vmspace *x1; struct sigacts *x2; int x3; char x4; int x5; int x6; int x7; char *x8; void *x9; int x10; int x11; unsigned int x12; int x13; unsigned int x14; void *x15; char *x16; unsigned int x17; unsigned int x18; struct itimerval { struct timeval { long long x0; int x1; } x0; struct timeval { long long x0; int x1; } x1; } x19; struct timeval { long long x0; int x1; } x20; unsigned long long x21; unsigned long long x22; unsigned long long x23; int x24; struct vnode *x25; int x26; struct vnode *x27; int x28; unsigned int x29; unsigned int x30; unsigned int x31; unsigned char x32; unsigned char x33; char x34; char x35[17]; struct pgrp *x36; struct user *x37; unsigned short x38; unsigned short x39; struct rusage *x40; } x0; struct eproc { struct proc *x0; struct session *x1; struct _pcred { char x0[72]; struct ucred *x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; } x2; struct _ucred { int x0; unsigned int x1; short x2; unsigned int x3[16]; } x3; struct vmspace { int x0; char *x1; int x2[5]; char *x3[3]; } x4; int x5; int x6; short x7; int x8; int x9; struct session *x10; char x11[8]; int x12; short x13; short x14; short x15; int x16; char x17[12]; int x18[4]; } x1; } *)arg1;
- (void)setDataController:(id)arg0;
- (id)sectionViewModel;
- (void)setSectionViewModel:(id)arg0;
- (void)syncFromDataController;
- (void)removeModelWithAwemeID:(id)arg0 animated:(BOOL)arg1;
- (void)p_trackQualityColdStartCancelIfNeeded;
- (void)p_addTrackParamsForModelList:(id)arg0;
- (void)preloadCoverImageWithModels:(id)arg0;
- (void)preloadAuthorAvatarWithModels:(id)arg0;
- (void)preloadImagesWithURLs:(id)arg0;
- (void)p_trackQualityColdStartErrorIfNeeded:(id)arg0;
- (void)p_trackQualityColdStartSuccessIfNeeded;
- (BOOL)isValidIndexPath:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (long long)requestCount;
- (void)setRequestCount:(long long)arg0;
- (void)refreshWithCompletion:(id /* block */)arg0;
- (long long)dataCount;
- (void)setDataCount:(long long)arg0;
- (id)dataController;

@end
