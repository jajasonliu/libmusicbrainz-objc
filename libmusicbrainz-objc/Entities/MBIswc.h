//
// @file MBISWC.h
// @author Joachim LeBlanc
// @date June 19 2012
// @copyright
//   2012 Joachim LeBlanc <demosdemon@gmail.com> \n
//   This program is made available under the terms of the MIT License.
//
// @brief

#import "MBEntity.h"

/// Represents an `<iswc/>` element
@interface MBIswc : MBEntity

@property (nonatomic, readonly) NSString * Value;

@end
