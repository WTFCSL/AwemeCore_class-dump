//
//     Generated by private class-dump
//

@class NSArray, RTVVoipParticipator, NSString;

@interface RTVVoipNarrowPreivewViewModel : NSObject {
    unsigned long long _previewType;
    NSArray *_participators;
    RTVVoipParticipator *_deputyParticipator;
    NSString *_statusDescription;
}

@property (readonly, nonatomic) unsigned long long previewType;
@property (readonly, copy, nonatomic) NSArray *participators;
@property (readonly, copy, nonatomic) RTVVoipParticipator *deputyParticipator;
@property (readonly, copy, nonatomic) NSString *statusDescription;

- (id)participators;
- (id)deputyParticipator;
- (id)initWithPreviewType:(unsigned long long)arg0 participators:(id)arg1;
- (id)initFullVideoPreviewWithParticipator:(id)arg0 statusDescription:(id)arg1;
- (id)initMultiFullVideoPreviewWithParticipator:(id)arg0 deputyParticipator:(id)arg1;
- (id)statusDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg0;
- (unsigned long long)previewType;

@end
