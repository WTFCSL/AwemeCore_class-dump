//
//     Generated by private class-dump
//

@class NSString, HGUniqueID;

@interface HGFacialRecognitionAlertControllerLogic : NSObject <UITextViewDelegate, HGPrivacyRegulationViewDelegate> {
    HGUniqueID *_uniqueID;
}

@property (retain, nonatomic) HGUniqueID *uniqueID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)clickPrivacyView:(id)arg0 type:(unsigned long long)arg1;
- (void)showFacialRecognitionAlertController:(id)arg0 uniqueID:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2 interaction:(long long)arg3;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;
- (BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg2;

@end