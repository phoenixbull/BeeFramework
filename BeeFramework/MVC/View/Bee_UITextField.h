//
//	 ______    ______    ______    
//	/\  __ \  /\  ___\  /\  ___\   
//	\ \  __<  \ \  __\_ \ \  __\_ 
//	 \ \_____\ \ \_____\ \ \_____\ 
//	  \/_____/  \/_____/  \/_____/ 
//
//	Copyright (c) 2012 BEE creators
//	http://www.whatsbug.com
//
//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//
//
//  Bee_UITextField.h
//

#import "Bee_Precompile.h"
#import "Bee_UISignal.h"

#pragma mark -

@class BeeUITextFieldAgent;

@interface BeeUITextField : UITextField
{
	BeeUITextFieldAgent *	_agent;
	NSUInteger				_maxLength;
	UIResponder *			_nextChain;
}

@property (nonatomic, assign) BOOL			active;
@property (nonatomic, assign) NSUInteger	maxLength;
@property (nonatomic, assign) NSObject *	nextChain;

AS_SIGNAL( WILL_ACTIVE )		// 将要获取焦点
AS_SIGNAL( DID_ACTIVED )		// 已经获取焦点
AS_SIGNAL( WILL_DEACTIVE )		// 已经丢失焦点
AS_SIGNAL( DID_DEACTIVED )		// 已经丢失焦点
AS_SIGNAL( TEXT_CHANGED )		// 文字变了
AS_SIGNAL( TEXT_OVERFLOW )		// 文字超长
AS_SIGNAL( CLEAR )				// 清空
AS_SIGNAL( RETURN )				// 换行

+ (BeeUITextField *)spawn;
+ (BeeUITextField *)spawn:(NSString *)tagString;

@end
