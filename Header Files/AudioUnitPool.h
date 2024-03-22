//
//     Generated by private class-dump
//

@interface AudioUnitPool : NSObject {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    BOOL _willTerminal;
    struct AVQueue<OpaqueAudioComponentInstance *> { BOOL mWaited; BOOL mForceWakeup; struct AVNode *mCaches; struct AVNode *mCacheEnd; struct AVNode *mNodes; struct AVNode *mHead; struct AVNode *mTail; struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } mMutex; struct _opaque_pthread_cond_t { long long __sig; char __opaque[40]; } mCond; int mMaxSize; int mCacheSize; int mFreezeSize; int mState; int mSize; char *mName; struct AVBufferCallback *mCallback; int mFlag; BOOL mEnableCallbackRef; } _audioUnitQueue;
}

+ (id)sharedPool;

- (void)willTerminal;
- (struct OpaqueAudioComponentInstance { } *)getAudioUnit;
- (void)pushbackAudioUnit:(struct OpaqueAudioComponentInstance { } *)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)clearPool;
- (id).cxx_construct;

@end
