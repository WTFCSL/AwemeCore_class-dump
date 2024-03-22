//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCRTLImpl : NSObject <ACCRTLProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableRTL;
- (void)setRTLTypeWithView:(id)arg0 type:(unsigned long long)arg1;
- (void)obj:(id)arg0 addRTLExecuteBlock:(id /* block */)arg1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })accrtl_basicTransformFor:(id)arg0;
- (void)disableOperationsCollectionForAttributedString:(id)arg0;
- (void)set_awertlAlignmentWithTextView:(id)arg0 alignment:(long long)arg1;
- (BOOL)isRTL;

@end