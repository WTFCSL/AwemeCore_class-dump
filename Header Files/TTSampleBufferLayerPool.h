//
//     Generated by private class-dump
//

@interface TTSampleBufferLayerPool : NSObject {
    struct AVMutex { int mValidValueS; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mMutex; int mValidValueE; } mMutex;
    struct AVQueue<com::ss::ttm::utils::SBDLBuffer *> { BOOL mWaited; BOOL mForceWakeup; struct AVNode *mCaches; struct AVNode *mCacheEnd; struct AVNode *mNodes; struct AVNode *mHead; struct AVNode *mTail; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mMutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } mCond; int mMaxSize; int mCacheSize; int mFreezeSize; int mState; int mSize; char *mName; struct AVBufferCallback *mCallback; int mFlag; BOOL mEnableCallbackRef; } mQueue;
    int mMaximumSize;
}

+ (id)sharedPool;

- (id)getSBDLayer;
- (void)pushbackSBDLayer:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)clear;
- (id).cxx_construct;

@end