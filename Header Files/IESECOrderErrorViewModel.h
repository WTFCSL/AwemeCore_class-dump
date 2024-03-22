//
//     Generated by private class-dump
//

@class NSString, IESECYataErrorContentView;

@interface IESECOrderErrorViewModel : IESECYataBaseViewModel <YataSectionViewModel> {
    unsigned long long _errorType;
    IESECYataErrorContentView *_errorContentView;
}

@property (nonatomic) unsigned long long errorType;
@property (retain, nonatomic) IESECYataErrorContentView *errorContentView;
@property (readonly, nonatomic) Class sectionClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)errorContentView;
- (void)setErrorContentView:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)errorType;
- (void)setErrorType:(unsigned long long)arg0;

@end