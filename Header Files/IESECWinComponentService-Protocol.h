//
//     Generated by private class-dump
//

@class IESECWinComponentResponse;

@protocol IESECWinComponentService <NSObject>

@property (retain, nonatomic) IESECWinComponentResponse *componentResponse;
@property (nonatomic) BOOL componentClosed;

- (void)setComponentClosed:(BOOL)arg0;
- (void)setComponentResponse:(id)arg0;
- (void)fetchDataWithActionParams:(id)arg0;
- (id)componentResponse;
- (BOOL)componentClosed;
- (void)fetchData;

@end
